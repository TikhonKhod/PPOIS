#pragma once
#include "Customer.h"
#include "Table.h"

class Reservation {
private:
    Table *table;
    Customer *customer;

public:
    Reservation(Table *table, Customer *customer);
    ~Reservation();
    Table *getTable() const;
    Customer *getCustomer() const;
    void display() const;
};

