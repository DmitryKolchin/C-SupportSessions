
#include <iostream>

template <typename T, int Size>
class Vector
{
private:
    T* Data = new T[Size];

public:
    Vector()
    {
        for (int i = 0; i < Size; ++i)
        {
            Data[i] = new T();
        }
    }

    Vector(T* InitialData)
    {
        for (int i = 0; i < Size; ++i)
        {
            Data[i] = InitialData[i];
        }
    }

    void operator+=(const Vector& Other)
    {
        for (int i = 0; i < Size; ++i)
        {
            Data[i] += Other.Data[i];
        }
    }
    Vector operator+(const Vector& Other)
    {
        T* InitialData = new T[Size];
        for (int i = 0; i  < Size; ++i)
        {
            InitialData[i] = Data[i] + Other.Data[i];
        }

        return Vector(InitialData);
    }

    void operator-=(const Vector& Other)
    {
        for (int i = 0; i < Size; ++i)
        {
            Data[i] -= Other.Data[i];
        }
    }

    Vector operator-(const Vector& Other)
    {
        T* InitialData = new T[Size];
        for (int i = 0; i  < Size; ++i)
        {
            InitialData[i] = Data[i] - Other.Data[i];
        }
        return Vector(InitialData);
    }

    void operator*=(const float Scalar)
    {
        for (int i = 0; i < Size; ++i)
        {
            Data[i] *= Scalar;
        }
    }

    Vector operator*(const float Scalar)
    {
        T* InitialData = new T[Size];
        for (int i = 0; i  < Size; ++i)
        {
            InitialData[i] = Data[i] * Scalar;
        }
        return Vector(InitialData);
    }
    void Display()
    {
        for (int i = 0; i < Size; ++i)
        {
            std::cout << Data[i] << " ";
        }
        std::cout << '\n';
    }

    float Magnitude()
    {
        float Magnitude = 0.f;
        for (int i = 0; i < Size; ++i)
        {
            Magnitude += Data[i] * Data[i];
        }
        return sqrt(Magnitude);
    }

    float DotProduct(const Vector& Other)
    {
        float Result = 0.f;
        for (int i = 0; i < Size; ++i)
        {
            Result += Data[i] * Other.Data[i];
        }

        return Result;
    }
    ~Vector()
    {
        delete[] Data;
    }

};




int main(int argc, char* argv[])
{
    float kek[3] = {1.f, 2.f, 3.f};
    Vector<float, 3> sas(kek);
    Vector<float, 3> lol(kek);

    auto U = sas + lol;

    U.Display();
    U *= 5;
    U.Display();

    std::cout << U.Magnitude() << '\n';
    std::cout << U.DotProduct(sas);
    return 0;
}
