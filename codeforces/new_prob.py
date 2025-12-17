from pathlib import Path

def main():
    print("What problem are you working on?")
    name = input().strip()
    print("Created Folder for " + name)
    
    base = Path.cwd()
    project_dir = base / name
    project_dir.mkdir(exist_ok=True)

    (a_cpp := project_dir / "a.cpp").touch()
    (input_txt := project_dir / "input.txt").touch()
    (a_py := project_dir / "a.py").touch()
    
    print(f"Created folder {name} with a.cpp, input.txt, a.py")

if __name__ == "__main__":
    main()