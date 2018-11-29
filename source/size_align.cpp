//-----------------------------------------------------------------------------
//
//  型の size と align 確認用
//
//-----------------------------------------------------------------------------
#include <iostream>

int main(int argc, char* argv[])
{
    struct Struct
    {
        bool bool_;
        int  int_;
    };

    class Class
    {
        bool bool_;
        int  int_;
        void method() {}
    };

    class VClass
    {
        bool bool_;
        int  int_;
        virtual void method() {}
    };

    std::size_t size_bool  = sizeof(bool);
    std::size_t size_char  = sizeof(char);
    std::size_t size_short = sizeof(short);
    std::size_t size_long  = sizeof(long);
    std::size_t size_int   = sizeof(int);
    std::size_t size_float = sizeof(float);
    std::size_t size_double= sizeof(double);
    std::size_t size_ptr   = sizeof(void*);
    std::size_t size_struct= sizeof(Struct);
    std::size_t size_class = sizeof(Class);
    std::size_t size_vclass= sizeof(VClass);
    std::size_t size_array = sizeof(Class[4]);
    std::size_t size_varray= sizeof(VClass[4]);

    std::size_t align_bool  = alignof(bool);
    std::size_t align_char  = alignof(char);
    std::size_t align_short = alignof(short);
    std::size_t align_long  = alignof(long);
    std::size_t align_int   = alignof(int);
    std::size_t align_float = alignof(float);
    std::size_t align_double= alignof(double);
    std::size_t align_ptr   = alignof(void*);
    std::size_t align_struct= alignof(Struct);
    std::size_t align_class = alignof(Class);
    std::size_t align_vclass= alignof(VClass);
    std::size_t align_array = alignof(Class[4]);
    std::size_t align_varray = alignof(VClass[4]);

    std::cout
        << "[byte]" << std::endl
        << "bool       size: " << size_bool   << "  align: " << align_bool   << std::endl
        << "char       size: " << size_char   << "  align: " << align_char   << std::endl
        << "short      size: " << size_short  << "  align: " << align_short  << std::endl
        << "long       size: " << size_long   << "  align: " << align_long   << std::endl
        << "int        size: " << size_int    << "  align: " << align_int    << std::endl
        << "float      size: " << size_float  << "  align: " << align_float  << std::endl
        << "double     size: " << size_double << "  align: " << align_double << std::endl
        << "void*      size: " << size_ptr    << "  align: " << align_ptr    << std::endl
        << "struct     size: " << size_struct << "  align: " << align_struct << std::endl
        << "class      size: " << size_class  << "  align: " << align_class  << std::endl
        << "vclass     size: " << size_vclass << "  align: " << align_vclass << std::endl
        << "class[4]   size: " << size_array  << "  align: " << align_array  << std::endl
        << "vclass[4]  size: " << size_varray << "  align: " << align_varray << std::endl;

    return 0;
}