
class Car
{
private:
    char *make_;
    int id_;

public:
    Car();

    Car(const char make[], int id);

    void SetMake(const char make[]);

    Car(Car &other);

    void Print();

    ~Car();
};