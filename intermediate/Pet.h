#ifndef PET_H
#define PET_H

class Pet{
    public:
        Pet();
       virtual ~Pet();
       void setValue(double value);
       void setBathFrequency(int bathFreq);
       void getValue();
       void getBathFrequency();

    private:
       double value;
       int bathFrequency;
};



#endif