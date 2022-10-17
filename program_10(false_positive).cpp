#include <stddef.h>
#include <assert.h>

struct my_allocator_t
{
  char buff[100];
};
 
my_allocator_t a;
 
void* operator new (const size_t p_size, my_allocator_t& p_allocator)
{ 
  return p_allocator.buff; 
}

void operator delete (void* p_ptr, my_allocator_t& p_allocator)
{
  assert(p_ptr == p_allocator.buff);
}
 
int test1()
{
  int* x = new (a) int;
  int* y = new (a) int;
  delete (a, x);
  delete (a, y);
}
