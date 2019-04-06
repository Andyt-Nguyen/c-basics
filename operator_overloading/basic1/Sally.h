#ifndef _SALLY_H_
#define _SALLY_H_

class Sally {
    public:
        int num;
        Sally();
        Sally(int);

        Sally operator+(Sally);
        Sally operator/(Sally);
};

#endif