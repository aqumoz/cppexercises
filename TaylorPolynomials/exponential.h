#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H


class Exponential
{
public:
    Exponential();
    double approxExp(double x);
    long long getOrder() const;
    void setOrder(long long order);

private:
    long long factorial(long long n);
    long long order;
};

#endif // EXPONENTIAL_H
