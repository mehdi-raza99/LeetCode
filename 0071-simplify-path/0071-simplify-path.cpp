class Solution {
public:
    string simplifyPath(string path) {
    stack<string> folders;
    int i = 0;

    while (i < path.length()) {
        while (i < path.length() && path[i] == '/') i++; // Skip '/'
        string segment = "";
        while (i < path.length() && path[i] != '/') segment += path[i++];
        
        if (segment == "" || segment == ".") continue;
        else if (segment == "..") {
            if (!folders.empty()) folders.pop();
        } else {
            folders.push(segment);
        }
    }

    if (folders.empty()) return "/";

    string result = "";
    while (!folders.empty()) {
        result = "/" + folders.top() + result;
        folders.pop();
    }
    return result;
}
};