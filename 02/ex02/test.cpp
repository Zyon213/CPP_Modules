#include <iostream>
#include <string>
#include <list>
#include <iterator>

class Test
{
private:
    std::string Name;
    int Num;

public:
    Test(std::string name, int num)
    {
        Name = name;
        Num = num;
    }
    void setName(std::string name)
    {
        Name = name;
    }
    std::string getName(void)
    {
        return Name;
    }
    void setNum(int num)
    {
        Num = num;
    }
    int getNum(void)
    {
        return Num;
    }
};

std::ostream &operator<<(std::ostream &output, Test &t)
{
    output << "Name " << t.getName() << std::endl;
    output << "Num " << t.getNum() << std::endl;

    return (output);
}

struct Test1
{
    std::string Name;
    int Num;

    Test1(std::string name, int n)
    {
        Name = name;
        Num = n;
    }

    bool operator==(const Test1 &t) const
    {
        return (Num == t.Num);
    }

    bool operator>(const Test1 &t) const
    {
        return (Num > t.Num);
    }

    bool operator<(const Test1 &t) const
    {
        return (Num < t.Num);
    }

    bool operator>=(const Test1 &t) const
    {
        return (Num >= t.Num);
    }

    bool operator<=(const Test1 &t) const
    {
        return (Num <= t.Num);
    }

    bool operator!=(const Test1 &t) const
    {
        return (Num != t.Num);
    }

    int operator*(const Test1 &t) const
    {
        return (Num * t.Num);
    }
    int operator/(const Test1 &t) const
    {
        return (Num / t.Num);
    }
    int operator+(const Test1 &t) const
    {
        return (Num + t.Num);
    }
    int operator-(const Test1 &t) const
    {
        return (Num - t.Num);
    }
    int operator++(int n)
    {
        n = 1;
        return (Num + n);
    }

    int min(int n1, int n2)
    {
        if (n1 < n2)
            return n1;
        else if (n2 < n1)
            return n2;
        return 0;
    }
    int max(int n1, int n2)
    {
        if (n1 > n2)
            return n1;
        else if (n2 > n1)
            return n2;
        return 0;
    }
};

std::ostream &operator<<(std::ostream &out, Test1 &t1)
{
    out << "My name " << t1.Name << std::endl;
    out << "My Num " << t1.Num << std::endl;
    return out;
}

struct myData
{
    std::list<Test1> myList;

    void operator+=(Test1 &t1)
    {
        myList.push_back(t1);
    }
};

std::ostream &operator<<(std::ostream &out, myData &d)
{
    for (Test1 t1 : d.myList)
        out << t1;
    return out;
}

int main()
{
    Test1 t1("Gomesz", 5);
    Test1 t2("Gomesz", 5);
    myData d;
    d += t1;
    d += t2;
    //    std::cout << d;
    if (t1 == t2)
        std::cout << "yes\n";
    else
        std::cout << "NO\n";
    if (t1 > t2)
        std::cout << "yes\n";
    else
        std::cout << "NO\n";

    if (t1 < t2)
        std::cout << "yes\n";
    else
        std::cout << "NO\n";

    if (t1 >= t2)
        std::cout << "yes\n";
    else
        std::cout << "NO\n";

    if (t1 <= t2)
        std::cout << "yes\n";
    else
        std::cout << "NO\n";

    if (t1 != t2)
        std::cout << "yes\n";
    else
        std::cout << "NO\n";

    std::cout << t1 * t2 << std::endl;
    std::cout << t1 / t2 << std::endl;
    std::cout << t1 + t2 << std::endl;
    std::cout << t1 - t2 << std::endl;
    std::cout << t1.Num << std::endl;

    std::cout << t1++ << std::endl;
    std::cout << t1.Num << std::endl;

    std::cout << t1.min(t1.Num, t2.Num) << std::endl;
    std::cout << t1.max(3, 4) << std::endl;

    return (0);
}