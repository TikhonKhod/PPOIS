#include "Table.h"

Table::Table(int id, int capacity) : id(id), capacity(capacity), reserved(false) {}

int Table::getId() const { return id; }
int Table::getCapacity() const { return capacity; }
bool Table::isReserved() const { return reserved; }

void Table::reserve() { reserved = true; }
void Table::free() { reserved = false; }