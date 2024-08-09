import { Link } from 'react-router-dom';

const categories = [
  { id: '1', name: 'Category 1' },
  { id: '2', name: 'Category 2' },
  { id: '3', name: 'Category 3' },
  { id: '4', name: 'Category 4' },
];

const news = [
  { id: '1', title: 'News Item 1', summary: 'Summary of news item 1' },
  { id: '2', title: 'News Item 2', summary: 'Summary of news item 2' },
  { id: '3', title: 'News Item 3', summary: 'Summary of news item 3' },
  { id: '4', title: 'News Item 4', summary: 'Summary of news item 4' },
];

function Home() {
  return (
    <div className="container mx-auto p-4">
      <h1 className="text-3xl font-bold mb-6">Welcome to the Craft Store</h1>

      <section className="mb-8">
        <h2 className="text-2xl font-semibold mb-4">Categories</h2>
        <div className="grid grid-cols-2 sm:grid-cols-4 gap-4">
          {categories.map(category => (
            <Link key={category.id} to={`/categories/${category.id}`} className="bg-white border rounded-lg shadow-md p-4 text-center">
              <h3 className="text-lg font-semibold">{category.name}</h3>
            </Link>
          ))}
        </div>
      </section>

      <section>
        <h2 className="text-2xl font-semibold mb-4">News</h2>
        <div className="grid grid-cols-1 sm:grid-cols-2 gap-4">
          {news.map(newsItem => (
            <Link key={newsItem.id} to={`/news/${newsItem.id}`} className="bg-white border rounded-lg shadow-md p-4">
              <h3 className="text-lg font-semibold">{newsItem.title}</h3>
              <p className="text-gray-600">{newsItem.summary}</p>
            </Link>
          ))}
        </div>
      </section>
    </div>
  );
}

export default Home;
