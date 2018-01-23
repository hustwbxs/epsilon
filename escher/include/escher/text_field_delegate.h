#ifndef ESCHER_TEXT_FIELD_DELEGATE_H
#define ESCHER_TEXT_FIELD_DELEGATE_H

class TextField;

class TextFieldDelegate {
public:
  virtual bool textFieldShouldFinishEditing(TextField * textField, Ion::Events::Event event) = 0;
  virtual bool textFieldDidReceiveEvent(TextField * textField, Ion::Events::Event event) = 0;
  virtual bool textFieldDidFinishEditing(TextField * textField, const char * text, Ion::Events::Event event) { return false; };
  virtual bool textFieldDidAbortEditing(TextField * textField) {return false;};
  virtual bool textFieldDidHandleEvent(TextField * textField, Ion::Events::Event event, bool returnValue, bool textHasChanged) { return returnValue; };
  virtual Toolbox * toolboxForTextField(TextField * textField) = 0;
};

#endif
