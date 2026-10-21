
#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include <cstddef>

template <typename T>
class Repository {
private:
    std::vector<T> records;

public:
    void add(const T& record) {
        records.push_back(record);
    }

    std::size_t size() const {
        return records.size();
    }

    bool empty() const {
        return records.empty();
    }

    void clear() {
        records.clear();
    }
};

#endif
