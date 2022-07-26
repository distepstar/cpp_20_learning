#ifndef STREAM_INSERT_TABLE_H
#define STREAM_INSERT_TABLE_H

#include <iostream>
#include <ostream>

class StreamInsertTable {

  friend std::ostream &operator<<(std::ostream &out,
                                  const StreamInsertTable &operand);

public:
  virtual void stream_insert(std::ostream &out) const = 0;
};

#endif // !STREAM_INSERT_TABLE_H
