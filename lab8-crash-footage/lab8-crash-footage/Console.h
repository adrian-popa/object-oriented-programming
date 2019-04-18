#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "RecordingController.h"

class Console {

private:
	std::shared_ptr<RecordingController> recordingController;

public:
	Console(const std::shared_ptr<RecordingController>& recordingController) : recordingController{ recordingController } {}

	void uiSelectMode(std::string inputString);

	void uiAddRecording(std::string inputString);

	void uiUpdateRecording(std::string inputString);

	void uiDeleteRecording(std::string inputString);

	void uiListRecordings(std::string inputString);

	void uiNextRecording(std::string inputString);

	void uiSaveRecording(std::string inputString);

	void uiSeeWatchlist(std::string inputString);

	void uiSetFileLocation(std::string inputString);

	void runConsole();
};