#pragma once

#include <chrono>
#include <experimental/optional>

class ITimeProvider;

template<typename ValueType, typename ErrorType>
class CachedValue {
    public:
        //CachedValue(const ITimeProvider& timeProvider, const std::chrono::duration timeout);
        CachedValue() {}

        void setValue(ValueType&& value) { mValue.emplace(value); }

        bool hasValue() const { return mValue.operator bool(); }

        bool hasError() const { return false; }

        const ValueType& getValue() const { return *mValue; }

    private:
        //const ITimeProvider& mTimeProvider;
        //const std::chrono::duration mTimeout;
        //std::chrono::time mTimestamp;
        std::experimental::optional<ValueType> mValue;
        //std::optional<ErrorType> mError;
};
