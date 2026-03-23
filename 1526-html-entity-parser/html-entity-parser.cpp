class Solution {
public:
    string entityParser(string text) {
        stringstream ss(text);
        string word;
        string out;
        for(int i = 0;i<text.size();i++)
        {
            if(text[i] == '&')
            {
                if(text.substr(i,6) == "&quot;")
                {
                    out.push_back('"');
                    i+=5;
                }
                else if(text.substr(i,6) == "&apos;")
                {
                    out.push_back('\'');
                    i+=5;
                }
                else if(text.substr(i,5) == "&amp;")
                {
                    out.push_back('&');
                    i+=4;
                }
                else if(text.substr(i,4) == "&gt;")
                {
                    out.push_back('>');
                    i+=3;
                }
                else if(text.substr(i,4) == "&lt;")
                {
                    out.push_back('<');
                    i+=3;
                }
                else if(text.substr(i,7) == "&frasl;")
                {
                    out.push_back('/');
                    i += 6;
                }
                else
                {
                    out.push_back('&');
                }

            }
            else
            {
                out.push_back(text[i]);
                // out.push_back(' ');
            }
        }
        return out;
        
    }
};