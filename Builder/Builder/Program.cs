
IComputerBuilder officeComputerBuilder = new OfficeComputer();
IComputerBuilder gamingComputerBuilder = new GamingComputer();
IComputerBuilder designerComputerBuilder = new DesignerComputer();

Director officeComputerDirector = new Director(officeComputerBuilder);
Director gamingComputerDirector = new Director(gamingComputerBuilder);
Director designerComputerDirector = new Director(designerComputerBuilder);

officeComputerDirector.ComputerAssembling();
Computer officeComputer = officeComputerBuilder.GetComputer();
officeComputer.DisplayInfo();

gamingComputerDirector.ComputerAssembling();
Computer gamingComputer = gamingComputerBuilder.GetComputer();
gamingComputer.DisplayInfo();
