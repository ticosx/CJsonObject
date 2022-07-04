#include "CJsonObject.h"


#define json_a "{\"a\" : 1, \"b\" : 2 }"
#define json_b "{\"b\" : 3, \"c\" : 4 }"
#define json_c "{\"e\" : {\"f\" : 6, \"g\" : 7, \"h\" : \"hello, world\" }, \"f\" : 4.234 }"
#define json_d "{\"e\" : {           \"g\" : \"haha\", \"h\" : \"hello, hello\", \"ijk\" : 2256 }, \"bb\" : 65535 }"

using neb::CJsonObject;

void setup() {
    CJsonObject a(json_a);
    CJsonObject b(json_b);
    CJsonObject c(json_c);
    CJsonObject d(json_d);
    a.Update(b);
    printf("%s\n", a.ToFormattedString().c_str());
    a.Update(c);
    printf("%s\n", a.ToFormattedString().c_str());
    a.Update(d);
    printf("%s\n", a.ToFormattedString().c_str());
}

void loop() {

}
