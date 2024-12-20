#pragma once
#include <string>
#include <vector>

class Feedback {
private:
    std::vector<std::string> reviews;

public:
    void addReview(const std::string& review);
    void displayAllReviews() const;
    int getReviewCount() const;
};

