#include <iostream>
#include <vector>
struct MemoryBlock {
    std::vector<uint8_t> data;
    bool readOnly;
};
class MMU {
private:
    std::vector<MemoryBlock> memory;
public:
    MMU() {
        // Инициализация памяти Sega Genesis
        memory.resize(65536); // Общий объем памяти
        // Заполнение памяти данными
        // ...
        // Назначение регионов памяти как доступных только для чтения
        // ...
    }
    uint8_t readByte(uint32_t address) {
        // Чтение байта из памяти по адресу address
    }
    void writeByte(uint32_t address, uint8_t value) {
        // Запись байта value в память по адресу address
    }
};