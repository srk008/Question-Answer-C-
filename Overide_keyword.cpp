class Base {
public:
    virtual void pureVirtualFunction() = 0;
};

class Derived : public Base {
public:
    void pureVirtualFunction() override {
        // Provide an implementation for the pure virtual function
    }
};

int main() {
    Derived obj;
    obj.pureVirtualFunction();

    return 0;
}

