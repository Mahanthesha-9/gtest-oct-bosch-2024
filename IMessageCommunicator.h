#include <string.h>
using name space std;
class IMessageCommunicator{
  public:
      virtual int pushMessage(const string& message)=0;
}
