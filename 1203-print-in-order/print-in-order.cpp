#include <condition_variable>
#include <functional>
#include <mutex>
using namespace std;

class Foo {
    mutex m;
        condition_variable cv;
            int i = 0;

            public:
                void first(function<void()> printFirst) {
                        {
                                    lock_guard<mutex> lock(m);
                                                printFirst();
                                                            i = 1;
                                                                    }
                                                                            cv.notify_all();
                                                                                }

                                                                                    void second(function<void()> printSecond) {
                                                                                            {
                                                                                                        unique_lock<mutex> lock(m);
                                                                                                                    cv.wait(lock, [&] { return i == 1; });
                                                                                                                                printSecond();
                                                                                                                                            i = 2;
                                                                                                                                                    }
                                                                                                                                                            cv.notify_all();
                                                                                                                                                                }

                                                                                                                                                                    void third(function<void()> printThird) {
                                                                                                                                                                            unique_lock<mutex> lock(m);
                                                                                                                                                                                    cv.wait(lock, [&] { return i == 2; });
                                                                                                                                                                                            printThird();
                                                                                                                                                                                                }
                                                                                                                                                                                                };