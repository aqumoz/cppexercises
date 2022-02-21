#ifndef PI_H
#define PI_H


class Pi
{
public:
    Pi();
    double approxPi();
    int getOrder() const;
    void setOrder(int order);

private:
    long long order;
};

#endif // PI_H
