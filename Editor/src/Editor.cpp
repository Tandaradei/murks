#include "Editor.hpp"

#include <cstdio>

#include "Runtime/include/Runtime.hpp"


namespace murks::editor {

	Editor::Editor() {
		printf("Editor initialized\n");
	}

}

int main() {
	murks::editor::Editor editor;
	murks::core::runtime::Runtime runtime;
}