#include <aws/s3/s3.h>
#include <aws/common/allocator.h>

#include <stdio.h>

int
main(int argc, char **argv)
{
  aws_s3_library_init(aws_default_allocator());
  
  aws_s3_library_clean_up();
  
  printf("Successfully exiting\n");
  return 0;
}
