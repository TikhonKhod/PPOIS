#include <gtest/gtest.h>
#include "../sipipi/Feedback.h"

TEST(FeedbackTest, AddAndDisplayReviews) {
    Feedback f;
    f.addReview("Great service!");
    f.addReview("Food was amazing.");
    EXPECT_EQ(f.getReviewCount(), 2);
}