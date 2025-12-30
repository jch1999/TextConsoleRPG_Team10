// Copyright 2025 <Team10>
#pragma once
template <typename T>
class Singleton {
private:
    Singleton() {}
    virtual ~Singleton() {}

public:
    static T* GetInstance() {
        if (instance == nullptr) {
            instance = new T;
        }
        return T;
    }

private:
    T* instance;

    friend T;
};