class dog {};

// Is equivalent to: 

class dog {
    public:
        dog(const dog& rhs) {}; // Member by member init

        dog& operator=(const dog& rhs) {}; // Member by member copying

        dog() {};   // 1. Call base class's default constructor
                    // 2. Call data member's default constructor


        ~dog() {};  // 1. Call base class's destructor
                    // 2. Call data member's destructor
};
// Compiler generated