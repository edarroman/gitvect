#ifndef NEWVECTOR_H
#define NEWVECTOR_H


class newvector
{
    public:
        newvector(int n);
        newvector();
        virtual ~newvector();
        float* getvect();
        int getsize();
        float getelem(int indic);
        float modifiervect(int indic, float val);
        float* somme2vect(newvector v2);
        float* supp1elem(int indic);
        bool estegal(newvector v2);
        int t;
    protected:
    private:
        float *vect;

};

#endif // NEWVECTOR_H
