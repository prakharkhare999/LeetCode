class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token = "";

        string result = "";
        //By default stringstream tokenizes on ' ' (space character)
        //Know more : https://github.com/MAZHARMIK/Cpp-STL-Quick-Help/blob/main/README.md
        while(ss >> token) {
            result = token + " " + result;
        }

        return result.substr(0, result.length()-1);
    }
};
