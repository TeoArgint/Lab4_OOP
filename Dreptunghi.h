#ifndef DREPTUNGHI_H
#define DREPTUNGHI_H

class Dreptunghi {
private:
    int lungime;
    int latime;
public:
    Dreptunghi();
    Dreptunghi(int lungime, int latime);
    Dreptunghi(const Dreptunghi &s);
    int getLungime();
    int getLatime();
    void setLungime(int lungime);
    void setLatime(int latime);
    Dreptunghi &operator = (const Dreptunghi &s);
    bool operator == (const Dreptunghi &s);
    ~Dreptunghi();
};

#endif //DREPTUNGHI_H
