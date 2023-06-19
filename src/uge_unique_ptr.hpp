#pragma once

namespace uge
{
    template <typename T>
    class unique_ptr
    {
        public:
        unique_ptr()
            : val { nullptr }
        {}

        unique_ptr(T* t)
            : val { t }
        {}

        ~unique_ptr() { delete val;}

        T* get() { return val; }
        private:
            T* val;
    };
};
