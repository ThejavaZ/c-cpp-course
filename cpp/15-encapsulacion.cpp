class Cuenta{
    private:
    double saldo;

    public:
    Cuenta(double s): saldo(s){};

    double getSaldo() { return saldo; }
};