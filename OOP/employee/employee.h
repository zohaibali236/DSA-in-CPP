#ifndef __employee
    #define __employee
class employee
{
    private:
            int eID;
            float eCompensation;
    public:
            employee();
            
            void setData(int, float);

            void displayData();
};
#endif