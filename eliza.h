#ifndef ELIZA_H
#define ELIZA_H

#include <regex>
#include <vector>
#include <string>


class Eliza {
public:

Eliza();

std::string greeting() const;

std::string respond(const std::string &rawInput);

std::string goodbye() const;

// some kind of history

private:
    void buildRules();

    void matchRule();

    std::string noResponse() const;

};


#endif