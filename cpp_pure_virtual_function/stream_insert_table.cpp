#include "stream_insert_table.h"

std::ostream &operator<<(std::ostream &out, const StreamInsertTable &operand) {
  operand.stream_insert(out);
  return out;
}
