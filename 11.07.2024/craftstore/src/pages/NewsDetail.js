import { useParams } from 'react-router-dom';

const news = [
  { id: '1', title: 'News Item 1', content: 'Full content of news item 1' },
  { id: '2', title: 'News Item 2', content: 'Full content of news item 2' },
  { id: '3', title: 'News Item 3', content: 'Full content of news item 3' },
  { id: '4', title: 'News Item 4', content: 'Full content of news item 4' },
];

function NewsDetail() {
  const { id } = useParams();
  const newsItem = news.find(n => n.id === id);

  if (!newsItem) return <p>News not found</p>;

  return (
    <div className="container mx-auto p-4">
      <h1 className="text-3xl font-bold mb-6">{newsItem.title}</h1>
      <p>{newsItem.content}</p>
    </div>
  );
}

export default NewsDetail;
