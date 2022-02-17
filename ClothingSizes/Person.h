#ifndef PERSON_H
#define PERSON_H


class Person
{
public:
    Person();
    Person(int age, double width, double height);
    int getAge() const;
    void setAge(int age);

    double getWeight() const;
    void setWeight(double width);

    double getHeight() const;
    void setHeight(double height);

private:
    int age;
    double weight;
    double height;
};

#endif // PERSON_H
