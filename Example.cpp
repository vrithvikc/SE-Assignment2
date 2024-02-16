#include "example.h"

Example::Example() : m_value(0) {
    // Constructor implementation
}

int Example::getValue() const {
    return m_value; // Return the value of the example
}

void Example::setValue(int value) {
    m_value = value; // Set the value of the example
}
