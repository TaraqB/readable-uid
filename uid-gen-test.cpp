#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

TEST(UID, UID_is_generated_within_length_limit) {
  std::string uid = uidgen();
  ASSERT_TRUE(uid.length() > 0);
}
TEST(UID, UID_is_string_has_5_dots) {
  std::string uid = uidgen();
  std::count(uid, &uid + uid.length() + n, '.')
  ASSERT_EQ(std::count(uid, &uid + uid.length() + n, '.'),5);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
