class Wheel
{
private:
    char *company_;
    bool front;

public:
    Wheel();

    Wheel(const char company[], bool front);

    Wheel(Wheel &other);

    void Print();

    ~Wheel();
};