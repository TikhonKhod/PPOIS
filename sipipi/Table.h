#pragma once
class Table {
private:
    int id;
    int capacity;
    bool reserved;
public:
    Table(int id, int capacity);
    int getId() const;
    int getCapacity() const;
    bool isReserved() const;
    void reserve();
    void free();
};
