#ifndef URL_H
#define URL_H
#include <string>
//#include "signal.h"

class URL {
private:
    std::string url;
    //std::string urlext;
public:
    // URL(std::string url);
    URL() {}
    // bool isAbsolute();
    // bool isRelative();
    void setURL(const std::string &url);
    static std::string getFirstPiece(const std::string &url);
    static std::string toBaseURL(const std::string &url);
    bool isValidAbsolute() const;
    std::string toString() const;
    void toAbsolute(const std::string &relativeToUrl);
};

#endif // URL_H
