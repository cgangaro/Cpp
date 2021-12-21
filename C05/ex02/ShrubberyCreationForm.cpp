#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
	if (b.getGrade() > this->getRequiredGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getSigned())
		throw Form::FormNotSigned();
	std::ofstream ofs;

	ofs.open(this->getTarget() + "_shrubbery");
	if (ofs.fail())
	{
		throw ShrubberyCreationForm::ErrorFile();
		return ;
	}

	ofs << "                                             🐦           ." << std::endl;
	ofs << "                                              .         ;  " << std::endl;
	ofs << "                 .              .              ;%     ;;   " << std::endl;
	ofs << "                   ,           ,🍎              🍎:;%  %;   " << std::endl;
	ofs << "           🐦        :         ;                   :;%;'     .," << std::endl;   
	ofs << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	ofs << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	ofs << "            🍎 %;       %;%;      ,  ;🍎     %;  ;%; 🍎 ,%;' " << std::endl;
	ofs << "               ;%;     🍎%;        ;%;        % ;%;  ,%;'" << std::endl;
	ofs << "                `%;.     ;%;     %;'      🐦  `;%%;.%;'" << std::endl;
	ofs << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	ofs << "                    `:%;.  :;bd%;🍎         %;@%;'" << std::endl;
	ofs << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	ofs << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	ofs << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	ofs << "                            ;@%. :@%%  %@@%;       " << std::endl;
	ofs << "                              %@bd%%%bd%%:;     " << std::endl;
	ofs << "                                #@%%%%%:;;" << std::endl;
	ofs << "                                %@@%%%::;" << std::endl;
	ofs << "            |                   %@@@%(o);  . '         " << std::endl;
	ofs << "                               %@@@o%;:(.,'         " << std::endl;
	ofs << "             |              `.. %@@@o%::;         " << std::endl;
	ofs << "                               `)@@@o%::;         " << std::endl;
	ofs << "            |                   %@@(o)::;        " << std::endl;
	ofs << "            🍎                  .%@@@@%::;         " << std::endl;
	ofs << "                               ;%@@@@%::;.          " << std::endl;
	ofs << "                              ;%@@@@%%:;;;. " << std::endl;
	ofs << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 137, 145)
{
	this->setTarget("Default");
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): Form("ShrubberyCreationForm", 137, 145)
{
	this->setTarget(target);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy): Form(copy)
{
	this->setTarget(copy.getTarget());
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

const char *ShrubberyCreationForm::ErrorFile::what() const throw()
{
	return("Error File");
}

