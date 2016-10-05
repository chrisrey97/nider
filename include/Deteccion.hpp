#ifndef DETECCION_HEADER
#define DETECCION_HEADER

#include "Nider.hpp"
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/video.hpp>

namespace nider
{
    class sistema;
    class detector
    {
    public:
        detector(std::string video_path, nider::sistema &sistema_ref);
        void Iniciar(bool debug);
        void LoopPrincipalDeteccion();
    private:
        nider::sistema &sistema_ref;
        std::string video_path;
        cv::VideoCapture video_input;
        cv::Mat currentFrame;
        cv::Mat nextFrame;
    };
}

#endif