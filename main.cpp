//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>


char key = ' ';

int main(int argc, char** argv)
{
	cv::Mat image1;
	cv::Mat image2;

	cv::VideoCapture cap1(0);
	cv::VideoCapture cap2(1);

	//image = cv::imread("C:/Users/user/Desktop/lenna.png");   // Read the file

	//if (!image.data)                              // Check for invalid input
	//{
	//	cout << "Could not open or find the image" << endl;
	//	return -1;
	//}

	while (key !='q'){
		cap1 >> image1;
		cap2 >> image2;

		cv::imshow("Display window", image1);
		cv::imshow("Display window2", image2);

		key =  cv::waitKey(15);
	}

	//cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);// Create a window for display.
	//cv::imshow("Display window", image);                   // Show our image inside it.

	//cv::waitKey(0);                                          // Wait for a keystroke in the window
	return 0;
}