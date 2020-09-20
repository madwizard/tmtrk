//
// Created by trochej on 9/20/20.
//

#ifndef TMTRK_TMTRK_H
#define TMTRK_TMTRK_H

#include "vector"

namespace Journal

struct timestamp {
    std::date start_t;
    std::date stop_t;
};

class Entry {
public:
    Entry();
private:
    std::string title;
    std::string comment;
    std::vector<timestamp> times;
};

class Journal {
public:
    Journal();
private:

};

#endif //TMTRK_TMTRK_H
