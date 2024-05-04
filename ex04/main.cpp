#include <iostream>
#include <fstream>

static int	read_file(std::string& str, char *argv)
{
	std::ifstream	file(argv);
	if (!file)
		return (0);
	str.assign(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>());
	file.close();
	return (1);
}

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strcat(char *str, const char *cat)
{
	char *result = new char[ft_strlen(str) + ft_strlen(cat) + 1];
	int i = 0;
	int j = 0;
	while (i < ft_strlen(str))
		result[i++] = str[j++];
	j = 0;
	while (j < ft_strlen(cat))
		result[i++] = cat[j++];
	result[i] = '\0';
	return (result);
}

static int	my_strstr(const char *tmp, const char *charset)
{
	int	i;

	i = 0;
	while (i < ft_strlen(charset))
	{
		if (tmp[i] != charset[i])
			return (0);
		i++;
	}
	return (1);
}

static void	str_replace(std::string& str, char **argv, std::ofstream& file)
{
	size_t	i;
	const char	*tmp;

	i = 0;
	while (i < str.size())
	{
		tmp = str.c_str();
		if (!my_strstr(tmp + i, argv[2]))
		{
			file << tmp[i];
			i++;
		}
		else
		{
			file << argv[3];
			i += ft_strlen(argv[2]);
		}
	}
}

int	main(int argc, char **argv)
{
	std::string	str;
	std::string	replace;
	char	*result;

	if (argc != 4)
		return (1);
	if (!read_file(str, argv[1]))
		return (2);
	result = ft_strcat(argv[1], ".replace");
	std::ofstream	file(result);
	delete result;
	if (!file)
		return (3);
	str_replace(str, argv, file);
	return (0);
}