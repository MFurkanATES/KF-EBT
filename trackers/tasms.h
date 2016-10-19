#ifndef TASMS_H
#define TASMS_H

#include "btracker.h"
#include "ASMS/colotracker.h"


class tASMS : public BTracker
{
public:
    tASMS();

    void run();

    void init(cv::Mat& image, cv::Rect region);
    void correctState(std::vector<float> st);
    void track();
    void update();
    void newFrame(cv::Mat& image, std::vector<float> predictRect);
    cv::Rect getRect();

private:
    ColorTracker asms;
    cv::Mat currentFrame;
    std::vector<float> currentPredictRect;
};

#endif // TASMS_H
