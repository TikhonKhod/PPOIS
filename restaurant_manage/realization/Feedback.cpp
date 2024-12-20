#include "Feedback.h"
#include <iostream>

void Feedback::addReview(const std::string& review) {
    reviews.push_back(review);
}

void Feedback::displayAllReviews() const {
    for (const auto& review : reviews) {
        std::cout << review << std::endl;
    }
}

int Feedback::getReviewCount() const {
    return reviews.size();
}